#!/bin/sh
ldapsearch -LLL "(uid=z*)" cn | grep "cn:" | sort -r --ignore-case | cut -c5-50
