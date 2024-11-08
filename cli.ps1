$Owner = "yatinnargotra"
$Repo = "VLSI-JS-Assignments"
$Branch = "main"

$DownloadUrl = "https://github.com/$Owner/$Repo/archive/refs/heads/$Branch.zip"
$ZipFilePath = "$Repo-$Branch.zip"

Invoke-WebRequest -Uri $DownloadUrl -OutFile $ZipFilePath

# Unzip the downloaded repository
# Destination folder name will be the same as the zip file name without the extension
$ExtractedFolder = "$Repo-$Branch"
Expand-Archive -Path $ZipFilePath -DestinationPath $ExtractedFolder -Force

Remove-Item $ZipFilePath
