
 clc
 clear

 a=input ('Enter the value of a:');
 b=input ('Enter the value of b:');

for k=1:1:15
    t(k)=k;
    x1(k)=a;
    x2(k)=b;
   c(k)= (x1(k)+x2(k))/2;

   if k>1
     l(k)=((c(k)-c(k-1))/c(k))*100;
     m(k)=abs(l(k));
    if m(k)<=0.001

       break;
       end
      endif

     f1(k) =x1(k)^2-2*x1(k)-3;
     f2(k) =c(k)^2-2*c(k)-3;


   if f1(k)*f2(k)>0
      a=c(k);
   end

  if f1(k)*f2(k)<0
     b=c(k);
   end
   endfor

  result=[t' x1' x2' c' f1' f2' m'];
  disp('Iteration       a        b        c         fa         fc        Error');
  disp(result);
  root=c(k);
  fprintf( 'The root if %0.4f',root);
