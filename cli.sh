#!/bin/bash

OWNER="yatinnargotra"
REPO="VLSI-JS-Assignments"
BRANCH="main"

wget "https://github.com/$OWNER/$REPO/archive/refs/heads/$BRANCH.zip" -O "$REPO-$BRANCH.zip"

unzip "$REPO-$BRANCH.zip"

rm "$REPO-$BRANCH.zip"