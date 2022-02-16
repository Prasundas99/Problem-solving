function printUsingRecurssion(a) {
  //base condition : Where recurssion will stop making new calls
  if (a == 5) {
    return true;
  }

  console.log(a);
  //Recurssive call
  //Each recurssive call is treated as seperated condition in call stack
  printUsingRecurssion(a + 1);
}
