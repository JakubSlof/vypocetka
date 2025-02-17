program Hello;
var
  x, max: string;  
  i: integer;      
begin
  readln(max);     
  for i := 1 to 9 do 
  begin
    readln(x);     
    if x > max then
      max := x;    
  end;
  writeln('nejvetsi je ', max);  
end.
