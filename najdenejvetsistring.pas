program Hello;
var s : string;
var j : integer;
var i : integer;
var max : string;
begin
 readln(s); //nacte string
 j := Length(s);
 max := s[1];
for i:= 0 to Length(s) do 
begin
if s[j]> max then max := s[j];
j := j - 1;
end;
writeln(max)
end.