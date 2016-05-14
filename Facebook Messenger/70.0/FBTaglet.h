/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTagletDelegate;
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSString, FBTagView;

@interface FBTaglet : NSObject {

	char _visiblity;
	float _scale;
	NSString* _text;
	FBTagView* _view;
	id<FBTagletDelegate> _delegate;
	CGPoint _position;

}

@property (assign,nonatomic) float scale;                                       //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGPoint position;                                  //@synthesize position=_position - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) FBTagView * view;                                //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) char hidden; 
@property (assign,nonatomic) char visiblity;                                    //@synthesize visiblity=_visiblity - In the implementation block
@property (assign,nonatomic,__weak) id<FBTagletDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setVisiblity:(char)arg1 ;
-(char)visiblity;
-(id)initWithText:(id)arg1 detailText:(id)arg2 position:(CGPoint)arg3 session:(id)arg4 ;
-(void)setDelegate:(id<FBTagletDelegate>)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id<FBTagletDelegate>)delegate;
-(FBTagView *)view;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(NSString *)text;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(char)hidden;
@end

