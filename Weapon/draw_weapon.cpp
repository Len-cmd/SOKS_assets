CImg<unsigned char> img("sword1.png");              
const unsigned char valR = img(10,10,0,0);        
const unsigned char valG = img(10,10,0,1);        
const unsigned char valB = img(10,10,2);          
const unsigned char avg = (valR + valG + valB)/3; 
img(10,10,0) = img(10,10,1) = img(10,10,2) = avg; 
CImgDisplay main_disp(img, "level2");      
img.save("sword2.png");
