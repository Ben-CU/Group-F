require 'gizoogle'

puts "What would you like?"
userinp = gets
if userinp.length < 6
   print "String too short. Enta a longa one/n"
      userinp = gets
         end
clippy = %Q(

                        _.-;:q=._ 
                      .' j=""^k;:\. 
                     ; .F      k";`Y   
                 _,-;,;.J_ =;=_;_;'j
                |_,-;"^7F: ;FJ;;7^;'
                 ,-'-_<.        ;gj.   	
                ;  _,._`\.     : `T"5,
                : `?8w7 `J  ,-'" -^q.
                 \;._ _,=' ;   n58L Y.      
                   F;";  .' k_ `^'  j'  
                   J;:: ;     "y:-='  	#{Gizoogle::String.translate(userinp)}
                   \L;;==      |:;  jT     
                    0;:;J      J:L  7:
                    I0|:.L     |:k J:'
                    |;0:.|     ;.I F0:
                   ;J;:0::     |.| 0.J 
                    J:`J0`.    :.J0|. L
                     L :k0 _ ,',j0J; |
                     I :`=0:."_"0'  L J
                     |.:  `0-=-0    |.J
                     `: :   000     ;:;
                      J: :   $     /.;'
                       k;.\.    _.;:Y'
                        `Y;."-=';:='
                           `"==="'
)

puts clippy
