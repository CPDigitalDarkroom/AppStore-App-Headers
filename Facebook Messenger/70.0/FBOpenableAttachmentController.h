/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAttachmentController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBOpenableAttachmentNodeDelegate.h>

@class NSString;

@interface FBOpenableAttachmentController : FBAttachmentController <FBOpenableAttachmentNodeDelegate>

@property (assign,nonatomic,__weak) id<FBOpenableAttachmentControllerDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)modalPresentationStackManager;
-(id)existingModalLayerForAttachmentNode:(id)arg1 ;
-(char)attachmentNode:(id)arg1 shouldBeginGesture:(id)arg2 ;
-(void)attachmentNode:(id)arg1 didUpdateInteractionProgress:(float)arg2 ;
-(void)attachmentNodeWillLift:(id)arg1 ;
-(void)attachmentNodeDidUnlift:(id)arg1 ;
-(void)attachmentNodeMayOpen:(id)arg1 ;
-(void)attachmentNodeWillOpen:(id)arg1 animated:(char)arg2 ;
-(void)attachmentNodeDidOpen:(id)arg1 ;
-(void)attachmentNodeMayClose:(id)arg1 ;
-(void)attachmentNodeWillClose:(id)arg1 animated:(char)arg2 ;
-(void)attachmentNodeDidClose:(id)arg1 ;
-(id)attachmentNode;
-(char)shouldAllowDismissGestureAtPoint:(CGPoint)arg1 inDirection:(int)arg2 ;
@end

