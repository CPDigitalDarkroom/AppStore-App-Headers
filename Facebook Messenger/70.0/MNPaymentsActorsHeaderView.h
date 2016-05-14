/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsViewModelConfigurable.h>

@class MNPaymentsActorProfileView, MNPaymentsActorsHeaderViewModel, NSString;

@interface MNPaymentsActorsHeaderView : UIView <FBPaymentsViewModelConfigurable> {

	MNPaymentsActorProfileView* _senderView;
	MNPaymentsActorProfileView* _receiverView;
	MNPaymentsActorsHeaderViewModel* _viewModel;

}

@property (nonatomic,copy) MNPaymentsActorsHeaderViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfileImageDownloader:(id)arg1 ;
-(MNPaymentsActorsHeaderViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsActorsHeaderViewModel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

