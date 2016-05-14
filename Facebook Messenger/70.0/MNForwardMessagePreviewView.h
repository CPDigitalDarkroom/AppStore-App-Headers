/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, FBPlatformShareView, UIView, NSString, NSURL;

@interface MNForwardMessagePreviewView : UIView {

	FBUserSession* _session;
	FBPlatformShareView* _attachmentView;
	UIView* _placeholderView;
	char _isConfigured;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * caption; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (nonatomic,copy,readonly) NSURL * photoURL; 
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 shouldCreatePlaceholder:(char)arg3 ;
-(NSURL *)photoURL;
-(void)configureWithTitle:(id)arg1 caption:(id)arg2 description:(id)arg3 photoURL:(id)arg4 ;
-(void)_createShareAttachmentView;
-(id)_createSeparator;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(NSString *)caption;
-(NSString *)descriptionText;
@end

