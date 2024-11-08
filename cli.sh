#!/bin/bash

REPO_OWNER="yatinnargotra"
REPO_NAME="VLSI-JS-Assignments"
GITHUB_API="https://api.github.com"
RAW_CONTENT_URL="https://raw.githubusercontent.com"

files_json=$(wget -qO- "${GITHUB_API}/repos/${REPO_OWNER}/${REPO_NAME}/contents/")

if echo "$files_json" | grep -q "Not Found"; then
    echo "Error: Directory not found."
    exit 1
fi

# Parse and display files
echo "Folders in the repository:"
file_list=$(echo "$files_json" | sed -n 's/.*"name": "\([^"]*\)".*/\1/p')
counter=1
while IFS= read -r file; do
    echo "$counter) $file"
    counter=$((counter + 1))
done <<<"$file_list"

echo "Enter the number of the file you want to download:"
read file_number

selected_file=$(echo "$file_list" | sed -n "${file_number}p")

if [ -z "$selected_file" ]; then
    echo "Invalid selection."
    exit 1
fi

# wget -q "${RAW_CONTENT_URL}/${REPO_OWNER}/${REPO_NAME}/main/${subject}/${selected_file}" -O "$selected_file"

# if [ $? -eq 0 ]; then
#     echo "File '$selected_file' has been downloaded successfully."
# else
#     echo "Error downloading the file."
#     exit 1
# fi
