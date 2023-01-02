import java.io.*;
import java.util.Arrays;

public class Main {
	static char[][] arr;
	
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int N = Integer.parseInt(br.readLine());
		
		arr = new char[N][N];
		for(int i = 0; i < arr.length; i++) {
			Arrays.fill(arr[i], ' ');
		}
		
		func(N, 0, 0);
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				bw.write(arr[i][j]);
			}
			bw.write("\n");
		}
		bw.flush();
        bw.close();
        br.close();
	}
	
	public static void func(int N, int x, int y) {
		if(N == 1) {
			arr[x][y] = '*';
			return;
		}
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				if(i == 1 && j == 1) continue;
				else func(N/3, x*3+i, y*3+j);
			}
		}
	}
}
