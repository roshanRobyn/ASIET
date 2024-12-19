echo "enter the number"
read n
if [ $n -eq 0 ] || [ $n -eq 1 ]
then
echo "factorial=1"
else
fact=1
while [ $n -gt 0 ]
do
fact=$(($fact*$n))
n=$((n-1))
done
echo "factorial= $fact"
fi
