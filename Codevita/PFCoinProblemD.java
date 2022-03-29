import java.util.*;


public class PFCoinProblemD {

  public static void main(String prasun_das[]){
    PFCoinProblemD ob = new PFCoinProblemD();

    Scanner sc = new Scanner(System.in);

    int prasun_das_gridSet = sc.nextInt();

    char gridChars[][] = new char[prasun_das_gridSet][prasun_das_gridSet];
       
    int bhai_bhairowrepeater_first=0; 
    while(bhai_bhairowrepeater_first<prasun_das_gridSet){
      String stringsc = sc.next();
      for(int bhai_repeater_col_first=0; bhai_repeater_col_first < prasun_das_gridSet; bhai_repeater_col_first++){
        gridChars[bhai_bhairowrepeater_first][bhai_repeater_col_first]=stringsc.charAt(bhai_repeater_col_first);
      }
      bhai_bhairowrepeater_first++;
    }


    for(int bhairowrepeater=0;bhairowrepeater<prasun_das_gridSet;bhairowrepeater++){
      int repeater_col=0; 
      while(repeater_col<prasun_das_gridSet){
        if(gridChars[bhairowrepeater][repeater_col]=='C'){
          ob.pdmethodForRecursiveCall(bhairowrepeater,repeater_col,gridChars,prasun_das_gridSet);
          f_reqPQueue.add(startinginitialCount);
          startinginitialCount=0;
        }
        repeater_col++;
      }
    }

    
    int reqChar = 0, pd_p1 = 0, pd_p2_das = 0;


    while(!f_reqPQueue.isEmpty()){
      if(reqCharPrimeChecker(reqChar))
      pd_p1+=f_reqPQueue.poll();
      else pd_p2_das+=f_reqPQueue.poll();
      reqChar++;
    }

    System.out.print(pd_p1 + " " + pd_p2_das);
  }

  static PriorityQueue<Integer> f_reqPQueue = new PriorityQueue<>(Collections.reverseOrder());
  static boolean reqCharPrimeChecker(int reqChar){
    if(reqChar%2==0){
      return true;
    } else{
      return false;
    }
  }
  static boolean checkerConditionPd(int bhairowrepeater, int repeater_col, char gridChars[][], int prasun_das_gridSet){
    if(bhairowrepeater<0 || repeater_col<0 || bhairowrepeater>=prasun_das_gridSet || repeater_col>=prasun_das_gridSet || gridChars[bhairowrepeater][repeater_col]=='N'){
      return true;
    } else{
      return false;
    }
  }
   static int startinginitialCount = 0;
   static void pdmethodForRecursiveCall(int bhairowrepeater, int repeater_col, char gridChars[][], int prasun_das_gridSet){
    if(checkerConditionPd(bhairowrepeater, repeater_col, gridChars, prasun_das_gridSet))
      return;
      startinginitialCount++;
      gridChars[bhairowrepeater][repeater_col]='N';
    pdmethodForRecursiveCall(bhairowrepeater+1,repeater_col,gridChars,prasun_das_gridSet);
    pdmethodForRecursiveCall(bhairowrepeater-1,repeater_col,gridChars,prasun_das_gridSet);
    pdmethodForRecursiveCall(bhairowrepeater,repeater_col+1,gridChars,prasun_das_gridSet);
    pdmethodForRecursiveCall(bhairowrepeater,repeater_col-1,gridChars,prasun_das_gridSet);
  }
 
}