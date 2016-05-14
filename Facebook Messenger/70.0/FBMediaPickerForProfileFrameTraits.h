/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMediaPickerBaseTraits.h>

@class FBUserSession;

@interface FBMediaPickerForProfileFrameTraits : FBMediaPickerBaseTraits {

	FBUserSession* _session;
	unsigned _ctaType;

}
+(id)traitsWithSession:(id)arg1 ctaType:(unsigned)arg2 ;
-(id)analyticsSource;
-(char)allowFaceDetection;
-(char)tapToBringUpGalleryView;
-(char)allowFullScreenPhotoViewing;
-(unsigned)maxPhotosSelected;
-(unsigned)postSelectionAction;
-(unsigned)ctaType;
-(id)initWithSession:(id)arg1 ctaType:(unsigned)arg2 ;
-(char)useCustomizedEditingTool;
-(char)allowTagging;
-(char)requireSquarePhoto;
-(char)autoNavigationEnabled;
-(char)allowPaging;
-(id)init;
@end

