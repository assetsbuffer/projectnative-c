---
title: "Parse and store configuration key-value pairs from a string"
labels: [enhancement]
---

### Description
The code in `config.h` reads a configuration string containing key-value pairs separated by newlines and parses each line to extract the key and value. It then calls `store_line(key, value)` for each pair. This approach allows for easy initialization of configuration settings from a hardcoded string.

#### Key changes
- Defines a configuration string with multiple key-value pairs.
- Uses `std::istringstream` to parse the string line by line.
- Splits each line at the `=` character to separate keys and values.
- Calls `store_line(key, value)` for each parsed pair.

#### Example
```cpp
const char config[] = "url=http://example.com\nfile=main.exe\ntrue=0";
std::istringstream is_file(config);
std::string line;
while( std::getline(is_file, line) ) {
  std::istringstream is_line(line);
  std::string key;
  if( std::getline(is_line, key, '=') ) {
    std::string value;
    if( std::getline(is_line, value) ) 
      store_line(key, value);
  }
}
```
