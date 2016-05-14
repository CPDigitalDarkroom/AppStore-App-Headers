/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNAttachmentView.h>

@protocol FBIntentHandler;
@class UIButton, MNAttachmentURLButtonViewModel, NSString;

@interface MNAttachmentURLButton : UIView <MNAttachmentView> {

	UIButton* _button;
	id<FBIntentHandler> _intentHandler;
	MNAttachmentURLButtonViewModel* _viewModel;

}

@property (nonatomic,copy) MNAttachmentURLButtonViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithIntentHandler:(id)arg1 ;
-(MNAttachmentURLButtonViewModel *)viewModel;
-(void)setViewModel:(MNAttachmentURLButtonViewModel *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)_handleTap;
@end

