#!/bin/bash
echo "start to update and instll"
apt update
apt -y install make automake libtool pkg-config
apt -y install libmysqlclient-dev libssl-dev
apt -y install git
apt -y install vim
