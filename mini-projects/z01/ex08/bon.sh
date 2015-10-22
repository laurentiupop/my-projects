ldapsearch -x | grep "last-name" | grep -i "bon" | wc -l | rev | cut -d " " -f1 | rev
