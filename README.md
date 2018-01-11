# Tips
1. Fix vi insert problem: https://askubuntu.com/questions/296385/backspace-in-insert-mode-in-vi-doesnt-erase-the-character
vi  ~/.vimrc
set nocompatible
set backspace=2
nmap <Ctrl-V><Del> x
imap <Ctrl-V><Del> <Ctrl-V><Esc>lxi

2. g++: error trying to exec 'cc1d': execvp: No such file or directory

Solution: use different directory for the .d files in the makefile 
  
3. check MC_FOM_RELATIVE_TO_DATADIR for creating multichain in the tcp   
4. oversim doc https://sites.google.com/site/oversimdemystified/contents/01introduction
5. IoT with blockchain https://security.cse.iitk.ac.in/sites/default/files/Master_Thesis.pdf 
