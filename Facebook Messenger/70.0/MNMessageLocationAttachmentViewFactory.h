/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNAttachmentStyleViewFactory.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@protocol MNModalPresentation, MNViewControllerNavigation;
@class FBUserSession, MNMessageLocationAttachmentRideServicePresenter, NSString;

@interface MNMessageLocationAttachmentViewFactory : NSObject <MNAttachmentStyleViewFactory, FBSessionClassProvidable> {

	FBUserSession* _session;
	id<MNModalPresentation> _modalPresentationCoordinator;
	id<MNViewControllerNavigation> _navigationController;
	MNMessageLocationAttachmentRideServicePresenter* _rideServicePresenter;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithSession:(id)arg1 modalPresentationCoordinator:(id)arg2 navigationController:(id)arg3 rideServicePresenter:(id)arg4 ;
-(id)newAttachmentView;
-(id)newAttachmentViewController;
-(Class)attachmentViewClass;
@end

