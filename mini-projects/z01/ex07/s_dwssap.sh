cat /etc/passwd | grep -v "#" | awk 'NR%2==1' | grep "_" | cut -d: -f1 | rev| sort -r | awk -v val2=$FT_LINE2 'NR <= val2' | awk -v val1=$FT_LINE1 'NR>= val1' | tr "\n" ", " | sed "s/,/, /g" | rev | cut -c 3- | rev | sed "s/$/./"
