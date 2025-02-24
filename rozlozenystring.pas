program Hello;
var s : string;
begin
 readln(s); //nacte string
 writeln(s[1]); //vypise prvni znak
 writeln(s[2]); //vypise druhy znak
 s[3] := 'g'; //treti znak zmeni na g
 writeln(s[3]); // vypise treti znak
end.
