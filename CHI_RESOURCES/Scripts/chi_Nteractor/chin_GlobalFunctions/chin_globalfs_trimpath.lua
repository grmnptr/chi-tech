--######################################################### Remove path from name
function chinTrimPath(str)
    returnValue=str;
    strlen=string.len(str);
    for i=strlen,1,-1 do
        if ((string.sub(str,i,i)=="\\") or (string.sub(str,i,i)=="/")) then
            returnValue=string.sub(str,i+1);
            return returnValue;
        end
    end
    return returnValue;
end