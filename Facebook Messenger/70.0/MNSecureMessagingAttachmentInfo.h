/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSString, MNSecureMessagingImageMetadata, MNSecureMessagingVideoMetadata;

@interface MNSecureMessagingAttachmentInfo : NSObject <TBase, NSCoding> {

	NSData* __secret_key;
	long long __download_fbid;
	long long __download_size_bytes;
	NSData* __download_hash;
	NSString* __suggested_file_name;
	NSString* __file_mime_type;
	NSData* __thumbnail_data;
	MNSecureMessagingImageMetadata* __image_metadata;
	MNSecureMessagingVideoMetadata* __video_metadata;
	char __secret_key_isset;
	char __download_fbid_isset;
	char __download_size_bytes_isset;
	char __download_hash_isset;
	char __suggested_file_name_isset;
	char __file_mime_type_isset;
	char __thumbnail_data_isset;
	char __image_metadata_isset;
	char __video_metadata_isset;

}

@property (setter=setSecret_key:,getter=secret_key,nonatomic,retain) NSData * secret_key; 
@property (assign,setter=setDownload_fbid:,getter=download_fbid,nonatomic) long long download_fbid; 
@property (assign,setter=setDownload_size_bytes:,getter=download_size_bytes,nonatomic) long long download_size_bytes; 
@property (setter=setDownload_hash:,getter=download_hash,nonatomic,retain) NSData * download_hash; 
@property (setter=setSuggested_file_name:,getter=suggested_file_name,nonatomic,retain) NSString * suggested_file_name; 
@property (setter=setFile_mime_type:,getter=file_mime_type,nonatomic,retain) NSString * file_mime_type; 
@property (setter=setThumbnail_data:,getter=thumbnail_data,nonatomic,retain) NSData * thumbnail_data; 
@property (setter=setImage_metadata:,getter=image_metadata,nonatomic,retain) MNSecureMessagingImageMetadata * image_metadata; 
@property (setter=setVideo_metadata:,getter=video_metadata,nonatomic,retain) MNSecureMessagingVideoMetadata * video_metadata; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSecret_key:(NSData *)arg1 ;
-(void)setDownload_fbid:(long long)arg1 ;
-(void)setDownload_size_bytes:(long long)arg1 ;
-(void)setDownload_hash:(NSData *)arg1 ;
-(void)setSuggested_file_name:(NSString *)arg1 ;
-(void)setFile_mime_type:(NSString *)arg1 ;
-(void)setThumbnail_data:(NSData *)arg1 ;
-(void)setImage_metadata:(MNSecureMessagingImageMetadata *)arg1 ;
-(void)setVideo_metadata:(MNSecureMessagingVideoMetadata *)arg1 ;
-(id)initWithSecret_key:(id)arg1 download_fbid:(long long)arg2 download_size_bytes:(long long)arg3 download_hash:(id)arg4 suggested_file_name:(id)arg5 file_mime_type:(id)arg6 thumbnail_data:(id)arg7 image_metadata:(id)arg8 video_metadata:(id)arg9 ;
-(NSData *)secret_key;
-(char)secret_keyIsSet;
-(void)unsetSecret_key;
-(long long)download_fbid;
-(char)download_fbidIsSet;
-(void)unsetDownload_fbid;
-(long long)download_size_bytes;
-(char)download_size_bytesIsSet;
-(void)unsetDownload_size_bytes;
-(NSData *)download_hash;
-(char)download_hashIsSet;
-(void)unsetDownload_hash;
-(NSString *)suggested_file_name;
-(char)suggested_file_nameIsSet;
-(void)unsetSuggested_file_name;
-(NSString *)file_mime_type;
-(char)file_mime_typeIsSet;
-(void)unsetFile_mime_type;
-(NSData *)thumbnail_data;
-(char)thumbnail_dataIsSet;
-(void)unsetThumbnail_data;
-(MNSecureMessagingImageMetadata *)image_metadata;
-(char)image_metadataIsSet;
-(void)unsetImage_metadata;
-(MNSecureMessagingVideoMetadata *)video_metadata;
-(char)video_metadataIsSet;
-(void)unsetVideo_metadata;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

