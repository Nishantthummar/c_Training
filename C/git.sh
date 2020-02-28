clear
echo "enter filename"; 
read filename;
echo "enter commit"; 
read com;
if git add $filename;
then
	if git commit -m "$com";
	then
		 git push origin master;
		
	else
		echo "not commit"
	fi
	
else
	echo "not add filename";
fi
####git add $filename;

##git commit -m "$com";

##git push origin master ;
