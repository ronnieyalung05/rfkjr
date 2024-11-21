#!/bin/bash

echo "=========================="
echo "Starting App rfkjr for {APP_PRETTY_NAME}"


systemctl start rfkjr
systemctl start rosnodeChecker
