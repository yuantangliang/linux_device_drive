Xawtv is a app in ubuntu that can read from video and show in screen. we install xawtv to  test vivi
drive.

1. Install xawtv.
```bash 
sudo apt-get install xawtv.
```
2. Load vivi module. modeprobe can auto load dependent driver.
```bash 
sudo modprobe vivi
```
3. Show video
```bash 
xawtv -device /dev/video0
```

dddddd