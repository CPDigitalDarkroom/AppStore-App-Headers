/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SRWebSocketDelegate <NSObject>
@optional
-(void)webSocketDidOpen:(id)arg1;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2;
-(void)webSocket:(id)arg1 didReceivePong:(id)arg2;
-(void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(char)arg4;

@required
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;

@end

