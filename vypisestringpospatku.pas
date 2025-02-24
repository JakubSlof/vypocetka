program Hello;
var s : string;
var j : integer;
var i : integer;
begin
 readln(s); //nacte string
 j := Length(s);
for i:= 0 to Length(s) do 
begin
write(s[j]);
j := j - 1;
end;
end.