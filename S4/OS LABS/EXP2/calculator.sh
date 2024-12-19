x=1
while [ $x -eq 1 ]
do
echo "enter the two values"
read a
read b
echo "CALCULATOR"
echo "1.ADD"
echo "2.SUBTRACT"
echo "3.MULTIPLY"
echo "4.DIVIDE"
echo "5.EXIT"
read n
case $n in
	1)result=$(($a+$b))
	  echo "sum=$result";;
	2)result=$(($a-$b))
	  echo "difference=$result";;
	3)result=$(($a*$b))
	  echo "product=$result";;
	4)result=$(($a/$b))
	  echo "quotient=$result";;
	5)x=0;;
	*)echo "invalid option";;
esac
done

