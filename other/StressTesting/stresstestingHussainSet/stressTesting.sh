g++ Hussain_Set_test.cpp -o Hussain_Set_test
g++ Hussain_Set_working.cpp -o Hussain_Set_working
g++ generator.cpp -o generator

for((i = 1; ; ++i)); do
    ./generator $i > randomInput
    ./Hussain_Set_test <randomInput > myOutput
    ./Hussain_Set_working <randomInput > bruteOutput
    diff -w myOutput bruteOutput || break
    echo "Passed test: "   $i
done

echo -e "\nWA on the following test: "
cat randomInput
# echo "Your answer is:"
# cat myOutput
# echo "Brute force answer is:"
# cat bruteOutput
