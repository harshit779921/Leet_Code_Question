SELECT ip, COUNT(*) AS invalid_count
FROM logs
WHERE ip REGEXP '(^|\\.)0[0-9]+(\\.|$)'  -- Leading zeros in any octet
   OR ip REGEXP '(^|\\.)([3-9][0-9]{2,}|2[6-9][0-9]|25[6-9])(\\.|$)'  -- Numbers greater than 255
   OR ip NOT REGEXP '^([0-9]{1,3}\\.){3}[0-9]{1,3}$'  -- Not exactly 4 octets
GROUP BY ip
ORDER BY invalid_count DESC, ip DESC;