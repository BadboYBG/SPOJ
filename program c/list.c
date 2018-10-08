Đề thi qtatht
Câu 1 : tại sao phải phân vùng hệ thống. Trong hệ thống có các phân vùng nào.
Câu 2 : nêu cơ chế kiểm soát truy cập trong linux
Câu 3 : giải thích cơ chế xác thực bằng sinh trắc
Câu 4 : ids hoạt động ở các mode nào ? Giải thích
Câu 5 : nêu các giải pháp bảo mật cho hệ thống
Chỉ có 1 đề thôi nhé



config setup
        virtual_private=%v4:10.2.32.2/32,%v4:192.168.10.2/32,$
        nat_traversal=no
        protostack=netkey
        oe=off
        plutoopts="--interface=eth0"
 
conn IPSEC_VPN
        authby=secret
        auto=start
        ## PHASE 1 ##
        ike=aes256-sha1;modp1536
        keyexchange=ike
        ## PHASE 2 ##
        phase2=esp
        esp=aes256-sha1
        salifetime=3600s
        pfs=no
        type=tunnel
        left=202.32.12.10
        ## FOR DIRECT ROUTING ##
        leftsubnet=10.2.32.2/32
        leftnexthop=%defaultroute
        right=200.42.10.10
        rightsubnet=192.168.10.2/32
		
cp /etc/ipsec.d/private/{route1Key.pem,route1key_copy.pem}
openssl rsa -in /etc/ipsec.d/private/route1key_copy.pem -outform pem -out /etc/ipsec.d/private/route1Key.pem

