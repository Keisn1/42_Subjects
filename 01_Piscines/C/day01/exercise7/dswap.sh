#!/usr/bin/env sh

cat /etc/passwd | sed -n 2~2p | sed -n '5,9p' | cut -d":" -f1 | sort -r | tr "\n" "," | rev | sed 's/,/\./' | rev

cat /etc/passwd | grep -v "#" | sed -n 'n;p' | cut -f 1 -d : | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's:,:, :g' | sed 's:, $:.:' | tr -d '\n'
