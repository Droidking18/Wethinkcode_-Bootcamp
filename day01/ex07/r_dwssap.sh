cat  /etc/passwd | grep -v '^#.*' | sed n\;d | sed 's/:.*//' | rev | sort -r | tr '\n' ' ' | sed "s/ /, /g" | sed 's/, $/./' | tr -d '\n'
