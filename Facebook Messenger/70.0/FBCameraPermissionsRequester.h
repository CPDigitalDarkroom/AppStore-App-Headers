/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol FBCameraComponentModelManager;
@class FBCameraComponentToolbox, NSString;

@interface FBCameraPermissionsRequester : NSObject <UIAlertViewDelegate> {

	unsigned _requiredPermissions;
	id<FBCameraComponentModelManager> _modelManager;
	FBCameraComponentToolbox* _toolbox;
	char _haveAcceptedCustomAlert;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_presentCustomAlert;
-(void)_handlePhotoPermissionsAndAssetsLibraryForModel:(id)arg1 ;
-(void)_permissionsDeniedForModel:(id)arg1 state:(int)arg2 ;
-(void)_allPermissionsAcceptedForModel:(id)arg1 ;
-(void)requestPermissionsAndUpdateModel;
-(id)initWithModelManager:(id)arg1 requiredPermissions:(unsigned)arg2 toolbox:(id)arg3 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

