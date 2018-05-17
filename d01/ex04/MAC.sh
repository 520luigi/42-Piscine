#!/bin/sh
ifconfig | grep "ether...:" | cut -c 8-999
