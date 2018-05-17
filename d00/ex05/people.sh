#!/bin/sh
ldapsearch -x  -L "(uid=z*)" | grep "cn:" | sort -r --ignore-case | cut -c5-50
