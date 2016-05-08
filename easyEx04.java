package codeGround;

import java.util.Arrays;
import java.util.Scanner;
import java.io.FileInputStream;
//다트게임
class easyEx04 {
	
	public static void main(String args[]) throws Exception	{
		/* 아래 메소드 호출은 앞으로 표준입력(키보드) 대신 input.txt 파일로 부터 읽어오겠다는 의미의 코드입니다.
		   만약 본인의 PC 에서 테스트 할 때는, 입력값을 input.txt에 저장한 후 이 코드를 첫 부분에 사용하면,
		   표준입력 대신 input.txt 파일로 부터 입력값을 읽어 올 수 있습니다.
		   또한, 본인 PC에서 아래 메소드를 사용하지 않고 표준입력을 사용하여 테스트하셔도 무방합니다.
		   단, Codeground 시스템에서 "제출하기" 할 때에는 반드시 이 메소드를 지우거나 주석(//) 처리 하셔야 합니다. */
		//Scanner sc = new Scanner(new FileInputStream("input.txt"));
        
		//Scanner sc = new Scanner(System.in);
		Scanner sc = new Scanner(new FileInputStream("/Users/scarlett/Documents/input/sampleinput4.txt"));
		
		int TC;
		int test_case;

		TC = sc.nextInt();    
		 
		for(test_case = 1; test_case <= TC; test_case++) {
			// 이 부분에서 알고리즘 프로그램을 작성하십시오.
			int BullRadius = sc.nextInt();
			int TripleStartRadius = sc.nextInt();
			int TripleEndRadius = sc.nextInt();
			int DoubleStartRadius = sc.nextInt();
			int DoubleEndRadius = sc.nextInt();
			int trial = sc.nextInt();
			int totalscore = 0;
			int dartsscore[] = {6, 13, 4, 18, 1, 20, 5, 12, 9, 14, 11, 8, 16, 7, 19, 3, 17, 2, 15, 10};
			
			for(int i = 0; i < trial; i++) {
				int x = sc.nextInt();
				int y = sc.nextInt();
				double radius = Math.sqrt(Math.pow(x,2) + Math.pow (y,2)) ;
		        	double theta = Math.atan2(y, x); //x축과 이루는 각
		        	double angle = ((theta) * 180 / Math.PI + 360) % 360; //각도 
		        	int index = (int)(angle + 9)/18; //다트스코어 배열 인덱스 		        
		       
				if (1 <= radius && radius < BullRadius)
					totalscore += 50;
				else if (TripleStartRadius < radius && radius <= TripleEndRadius) 
					totalscore += dartsscore[index]*3;
				else if (TripleEndRadius < radius && radius < DoubleStartRadius)
					totalscore += dartsscore[index];
				else if (DoubleStartRadius <= radius && radius <= DoubleEndRadius)
					totalscore += dartsscore[index]*2;
				else
					totalscore += 0;
			}
            		// 이 부분에서 정답을 출력하십시오.
			System.out.println("Case #" + test_case);
			System.out.println(totalscore);
		}
	}
}
