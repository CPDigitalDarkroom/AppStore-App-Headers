/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSMutableArray, NSMutableDictionary, NSString;

@interface MNMessagesSyncDeltaSentMessage : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	NSMutableArray* __attachments;
	int __ttl;
	NSMutableDictionary* __data;
	char __messageMetadata_isset;
	char __attachments_isset;
	char __ttl_isset;
	char __data_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (setter=setAttachments:,getter=attachments,nonatomic,retain) NSMutableArray * attachments; 
@property (assign,setter=setTtl:,getter=ttl,nonatomic) int ttl; 
@property (setter=setData:,getter=data,nonatomic,retain) NSMutableDictionary * data; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(char)messageMetadataIsSet;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(char)attachmentsIsSet;
-(char)dataIsSet;
-(void)unsetData;
-(void)unsetMessageMetadata;
-(char)ttlIsSet;
-(void)unsetTtl;
-(void)unsetAttachments;
-(id)initWithMessageMetadata:(id)arg1 attachments:(id)arg2 ttl:(int)arg3 data:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)attachments;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
-(int)ttl;
-(void)setTtl:(int)arg1 ;
@end

