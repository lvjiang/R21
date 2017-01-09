#!/bin/sh
. $IPKG_INSTROOT/lib/functions.sh
configure_option()                                                                                                 
{                                                                                                              
        local cfg="$1"                                                                                         
        local option="$2"                                                                                      
        local opt="$3"                                                                     
        local conf_path="$4"                                                                             
        local val                                                                                                  
                                                                                                                   
        config_get val "$cfg" "$option"
        [ "X$val" != "X" ] && echo -e "$opt $val" >> "$conf_path" 
}  

creat_config_file()
{
        val=$1

        path=/var/run/eag.conf
        #echo "eag" >$path

        config_load captive_portal 
        config_get essid $val essid
       	ifnum=0                                                                 
        if [ "X$essid" != "X" ];then
		for x in $essid;do                                                      
                if [ `config_wlan get_opt ssid $x enable` -eq 1 ];then
			ifnum=`config_wlan get_opt ssid $x ifname |wc -l`               
                	if [ $ifnum -eq 0 ];then                                        
                        	break;                                                  
                	fi
		fi                                                              
        done                                                                 
        echo $ifnum                                                          
        if [ $ifnum -eq 0 ];then                                             
				i=0                                                          
                local start_ifnum=0
		wireless_ssid=`cat /etc/config/wireless  |grep wifi-iface |grep -v athscan|awk '{print $3}'`
		config_load wireless
		for w_ssid in $wireless_ssid;do
			w_essid=`echo $w_ssid |sed "s/'//g"`
			config_get enable $w_essid enable
			if [ $enable -eq 1 ];then
				start_ifnum=$(( $start_ifnum + 1 ))
			fi  
		done
		config_load captive_portal                                                   
		while true;                                                  
                do                                                           
                        if [ $start_ifnum -eq `iwinfo |grep ESSID |wc -l` ];then
                                break                                                                                                                          
                        else                                                                                                                                   
                                 i=$(( $i + 1 ))                                                                                                               
                        fi                                                                                                                                     
                        sleep 3                                                                                                                                
                        if [ $i -eq 20 ];then                                                                                                                  
                                break                                                                                                                          
                fi                                                                                                                                             
                done                                                                                                                                           
		
			for ssid in $essid ; do
			if [ "X$ssid" != "X" ];then
					for i in `iwinfo |grep \"$ssid\" |awk '{print $1}'` ; do
						echo $ssid > /var/run/cpp/$i
						intf=$intf" "$i
					done
				fi
			done
		else
		 	for ssid in $essid ; do 
				if [ "X$ssid" != "X" ];then                                                                                                            
            		 for i in `config_wlan get_opt ssid $ssid ifname`; do                                                               
				 		echo $ssid >/var/run/cpp/$i		 
             			intf=$intf" "$i                                                                                                        
              		done                                                                                                                           
            	 fi                                                                                                                                     
   			done     
		fi
	fi
		echo "eag" >$path
        echo "ifname $intf" >> $path
        configure_option "$val" "local_database" "local_database" "$path"
        configure_option "$val" "idletime" "idletime" "$path"
        configure_option "$val" "idleflow" "idleflow" "$path"
        configure_option "$val" "account_interval" "account_interval" "$path"
	configure_option "$val" "auth_mode" "auth_mode" "$path"
	configure_option "$val" "dns_redir" "dns_redir" "$path"
        config_get  white_list $val  white_list
        for x in $white_list ; do
                echo "white_list $x" >> $path
        done
        configure_option "$val" "switch" "switch" "$path"


    config_get  mac_white_rule $val  mac_white_rule                        
    for x in $mac_white_rule ; do                                  
        count=`cat $path |grep "$x"|wc -l`                                                                    
        if [ $count -eq 0 ];then                               
           echo "mac_white_rule $x" >> $path                   
        else                                                   
           countt=`cat $path |grep "$x:"|wc -l`                
           if [ $count -eq $countt ];then                    
               echo "mac_white_rule $x" >> $path                 
           fi                                                
        fi                                                   
    done 

}
sleep 10
#	i=0
#	enable=`cat /etc/config/wireless| grep "enable '1'" |wc -l`
#	enable=$(( $enable + 2 ))
#while true;
#do 
#        if [ `cat /etc/config/wireless |grep ssid |wc -l` -eq `iwinfo |grep ESSID |wc -l` ] || [ $enable -eq `iwinfo |grep ESSID |wc -l` ];then
#		break
#	else
#		 i=$(( $i + 1 ))
#	fi
#	sleep 3 
#	if [ $i -eq 10 ];then
#		break
#	fi
#done
creat_config_file eag
/usr/sbin/eag_cli reload
