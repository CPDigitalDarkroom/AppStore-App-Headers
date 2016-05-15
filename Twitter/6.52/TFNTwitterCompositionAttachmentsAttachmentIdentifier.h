/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterCompositionAttachmentsAttachmentIdentifier.h>

@protocol TFNTwitterCompositionAttachmentsAttachmentIdentifier
@property (nonatomic,readonly) unsigned attachmentType; 
@property (nonatomic,readonly) id<NSObject><NSCopying><NSCoding> objectIdentifier; 
@required
-(id<NSObject><NSCopying><NSCoding>)objectIdentifier;
-(unsigned)attachmentType;

@end


@protocol NSObjectNSCopyingNSCoding;
@interface TFNTwitterCompositionAttachmentsAttachmentIdentifier : NSObject <TFNTwitterCompositionAttachmentsAttachmentIdentifier> {

	unsigned _attachmentType;
	id<NSObject><NSCopying><NSCoding> _objectIdentifier;

}

@property (nonatomic,readonly) unsigned attachmentType;                                         //@synthesize attachmentType=_attachmentType - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSCopying><NSCoding> objectIdentifier;              //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
-(id)initWithAttachmentType:(unsigned)arg1 objectIdentifier:(id)arg2 ;
-(id<NSObject><NSCopying><NSCoding>)objectIdentifier;
-(unsigned)attachmentType;
@end

