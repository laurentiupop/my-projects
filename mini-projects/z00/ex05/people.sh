ldapsearch -x -LLL "objectClass=apple-user" dn |cut -f2 -d "=" | cut -f1 -d "," | sed '/^$/d' | sort -f -r
