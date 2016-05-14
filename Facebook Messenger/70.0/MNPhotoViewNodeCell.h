/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPhotoPreviewing.h>

@class MNPhotoViewNode, NSString;

@interface MNPhotoViewNodeCell : UICollectionViewCell <MNPhotoPreviewing> {

	MNPhotoViewNode* _photoViewNode;

}

@property (nonatomic,retain) MNPhotoViewNode * photoViewNode;              //@synthesize photoViewNode=_photoViewNode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewablePhotoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setPhotoViewNode:(MNPhotoViewNode *)arg1 ;
-(MNPhotoViewNode *)photoViewNode;
-(void)layoutSubviews;
-(char)isAccessibilityElement;
@end

