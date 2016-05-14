/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSimpleMediaViewProviderDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBDisplayableMediaViewProvider.h>

@protocol FBSimpleMediaViewProviderDelegate;
@class FBMemPhoto, FBDisplayableMediaViewProviderInfo, NSString;

@interface FBSimpleMediaViewProvider : NSObject <FBSimpleMediaViewProviderDelegate, FBDisplayableMediaViewProvider> {

	id _layerOrView;
	FBMemPhoto* _photo;
	id<FBSimpleMediaViewProviderDelegate> _delegate;
	unsigned _layerOrViewPosition;
	FBDisplayableMediaViewProviderInfo* _info;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)simpleMediaViewProvider:(id)arg1 viewOrLayerForMedia:(id)arg2 ;
-(id)needsMediaViewInfoForSourceInfo:(id)arg1 sender:(id)arg2 ;
-(void)didAddMediaViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(void)didFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(id)initWithLayerOrView:(id)arg1 media:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
@end

