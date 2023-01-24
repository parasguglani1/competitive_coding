g++ fastSolution.cpp -o fastSolution
g++ bruteSolution.cpp -o bruteSolution
g++ generator.cpp -o generator

for((i = 5153; ; ++i)); do
    ./generator $i > randomInput
    ./fastSolution <randomInput > myOutput
    ./bruteSolution <randomInput > bruteOutput
    diff -w myOutput bruteOutput || break
    echo "Passed test: "   $i
done

echo -e "\nWA on the following test:"
cat randomInput
echo "Your answer is:"
cat myOutput
echo "Brute force answer is:"
cat bruteOutput
