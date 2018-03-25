#!/bin/bash
echo "Synchronizing sublime snippets"

# Get paths 
relativeFilePath=$(dirname $0 )
filePath=$( cd $relativeFilePath ; pwd -P )
echo $filePath

snippetPath=$filePath/../sublime-snippets
echo $snippetPath

linuxSublimePath=~/.config/sublime-text-3/Packages/User
echo $linuxSublimePath

echo "---------- REMOVING SymLinks TO UPDATE ----------"
symFiles=$( ls $relativeFilePath/../sublime-snippets* )

for file in $symFiles; do
  snippetLink=$linuxSublimePath/$file
  echo "Checking if $snippetLink exists..."

  if [[ -f $snippetLink ]]; then
    echo "Deleting $snippetLink"
  elif [[ ! -e $snippetLink ]]; then
    echo "Bad symlink... fixing "
  fi

  rm $snippetLink

done

echo "----------      CREATING SymLinks      ----------"

for file in $symFiles; do
  
  echo "Creating symlink $filePath/$file --> $linuxSublimePath/$file"
  ln -s $snippetPath/$file $linuxSublimePath/$file

done

