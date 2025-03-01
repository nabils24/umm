// __  __            __           ___                     
///\ \/\ \          /\ \      __ /\_ \                    
//\ \ `\\ \     __  \ \ \____/\_\\//\ \     ____    ____  
// \ \ , ` \  /'__`\ \ \ '__`\/\ \ \ \ \   /',__\  /',__\ 
//  \ \ \`\ \/\ \L\.\_\ \ \L\ \ \ \ \_\ \_/\__, `\/\__, `\
//   \ \_\ \_\ \__/.\_\\ \_,__/\ \_\/\____\/\____/\/\____/
//    \/_/\/_/\/__/\/_/ \/___/  \/_/\/____/\/___/  \/___/ 

///////////////////////////////////
//Author : Nabil Sahsada Suratno///
//Mode : Java Main Class        ///
//Youtube : NabilGames          ///
///////////////////////////////////

package modul_1;


import java.util.Scanner;
import java.time.LocalDate;

//import.
public class Codelab_1 {
    
    
    public static int loadUmur(int tahunLahir){
        LocalDate date =  LocalDate.now();
        
        int tahunNow = date.getYear();
        
        int umurUpdated = tahunNow - tahunLahir;
        
        return umurUpdated;
    }
   
    public static void load(String nama, String kelamin,int tahunLahir){
        System.out.println("Nama : "+nama);
        if (kelamin.equalsIgnoreCase("P")) {
        System.out.println("Gender : Perempuan");
    } else if (kelamin.equalsIgnoreCase("L")) {
        System.out.println("Gender : Laki-laki");
    } else {
        System.out.println("Gender : Tidak diketahui");
    }
        System.out.println("Umur : "+ loadUmur(tahunLahir));
        System.out.println("==========SELESAI============");
    }
    public static void main(String[] args) {
        // Buat Kodingan Neng Kene Bro OKE:D
        Scanner input = new Scanner(System.in);
        
        System.out.println("==========CODELAB============");
        System.out.print("Masukan Nama : ");
        String nama = input.nextLine();
        System.out.print("Masukan kelamin (P/L) : ");
        String kelamin = input.nextLine();
        System.out.print("Masukan Tahun lahir kamu : ");
        int umur = input.nextInt();
        System.out.println("==========PROSES============");
        try {
            Thread.sleep(1500); 
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        load(nama, kelamin, umur);
    }

}
