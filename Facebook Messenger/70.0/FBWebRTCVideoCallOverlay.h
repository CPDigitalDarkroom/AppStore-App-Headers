/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBWebRTCVideoCallOverlay <NSObject>
@property (assign,nonatomic,__weak) id<FBWebRTCVideoCallOverlayDelegate> delegate; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,readonly) char isOverlayVisible; 
@required
-(void)configureWithEngine:(id)arg1;
-(char)isOverlayVisible;
-(void)setDelegate:(id)arg1;
-(id<FBWebRTCVideoCallOverlayDelegate>)delegate;
-(NSString *)status;
-(void)setStatus:(id)arg1;
-(void)unconfigure;

@end

